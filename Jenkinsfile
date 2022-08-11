pipeline {
  
  agent any
  
  stages {
    
    stage("Clone Source") {
      steps {
        sh "git clone https://github.com/bananasgroup/sqlbackgres.git"
      }
    }
    stage("build") {
      steps {
        sh "cd build/pgbackrest-release-2.36/src && ./configure && make"
      }
    }
    stage("deploy") {
      steps {
        sh "cp build/pgbackrest-release-2.36/src/pgbackrest /usr/bin"
      }
    }
    
  }
}
