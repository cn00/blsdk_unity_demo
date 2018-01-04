# !/us/sh

set -e
# set -x

# kill all unity
# killall Unity


echo "Expot IOS Poj ..."
# Unity -pojectPath ${WORKSPACE} -quit -batchmode -executeMethod BuildScipt.ExpotIOSPoj

basepath=$(cd `dirname $0`;pwd)

WORKSPACE=${WORKSPACE-${basepath}}

archivePath="${WORKSPACE}/../ios.proj/build/Release-iphoneos/Unity-iPhone.xcarchive"
exportOptionsPlist="${WORKSPACE}/../exportOptionsPlist.plist"

exportPath="${WORKSPACE}/../ios.proj/build/Release-iphoneos"


OTHER_LDFLAGS="-ObjC -lresolv -weak_framework CoreMotion -weak-lSystem -Wl -undefined dynamic_lookup"

cd "ios.proj"
## achive
xcodebuild -scheme Unity-iPhone -configuration Release archive -archivePath "${archivePath}" -allowProvisioningUpdates OTHER_LDFLAGS="${OTHER_LDFLAGS}" SWIFT_VERSION=4.0 LD_RUNPATH_SEARCH_PATHS="@executable_path/Famewoks" ENABLE_BITCODE=NO DEVELOPMENT_TEAM=UL9WJVVZ42


## expot ipa
xcodebuild -exportArchive -exportPath "${exportPath}" -archivePath "${archivePath}" -exportOptionsPlist "${exportOptionsPlist}" 

## upload-app
# altool --upload-app -f "CLI.ipa" -u $USERNAME -p $PASSWORD
