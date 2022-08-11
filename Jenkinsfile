pipeline {
  
  agent any
  
  stages {
    stage("build") {
      steps {
        cd "build/pgbackrest-release-2.36/src"
        ./configure
        make
      }
    }
    stage("deploy") {
      steps {
        cp build/pgbackrest-release-2.36/src/pgbackrest /usr/bin
      }
    }
  }
}
