pipeline {
  
  agent any
  
  stages {
    stage("build") {
      step {
        cd "build/pgbackrest-release-2.36/src"
        ./configure
        make
      }
    }
    stage("deploy") {
      step {
        cp build/pgbackrest-release-2.36/src/pgbackrest /usr/bin
      }
    }
  }
}
