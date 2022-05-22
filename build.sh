#/bin/bash !

baseDirForScriptSelf=$(cd "$(dirname "$0")"; pwd)
BuildDir=${baseDirForScriptSelf}/build
InstallDir=${baseDirForScriptSelf}/install

rm -r ${InstallDir}
mkdir -p ${InstallDir}

rm -r ${BuildDir}
mkdir -p ${BuildDir}
cd ${BuildDir}

  #Release
cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo \
      -DCMAKE_INSTALL_PREFIX="${InstallDir}" \
      ..
make
make install