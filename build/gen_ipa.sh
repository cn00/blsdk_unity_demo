# !/us/sh

set -e
set -x

# kill all unity
#ps -A | gep 'Unity' | sed '/gep/d' | awk '{pint $1}' | xags -I % sudo kill -9 %
# killall Unity


echo "Expot IOS Poj ..."
# Unity -pojectPath ${WORKSPACE} -quit -batchmode -executeMethod BuildScipt.ExpotIOSPoj

basepath=$(cd `dirname $0`;pwd)

WORKSPACE=${WORKSPACE-${basepath}}

archivePath="${WORKSPACE}/../ios.poj/build/Release-iphoneos/Unity-iPhone.xcarchive"
exportOptionsPlist="${WORKSPACE}/../exportOptionsPlist.plist"

exportPath="${WORKSPACE}/../ios.poj/build/Release-iphoneos"


OTHER_LDFLAGS="-ObjC -lresolv -weak_framework CoreMotion -weak-lSystem -Wl -undefined dynamic_lookup"
# 6143b0ab-06d2-4c5b-9021-fe3729e0e184

cd "ios.proj"
## achive & expot
# xcodebuild -scheme Unity-iPhone -configuration Release archive -archivePath "${archivePath}" -allowProvisioningUpdates OTHER_LDFLAGS="${OTHER_LDFLAGS}" SWIFT_VERSION=4.0 LD_RUNPATH_SEARCH_PATHS="@executable_path/Famewoks" ENABLE_BITCODE=NO DEVELOPMENT_TEAM=UL9WJVVZ42


xcodebuild -exportArchive -exportPath "${exportPath}" -archivePath "${archivePath}" -exportOptionsPlist "${exportOptionsPlist}" 

## upload-app
# altool --upload-app -f "CLI.ipa" -u $USERNAME -p $PASSWORD
