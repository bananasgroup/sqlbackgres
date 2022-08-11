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
        sh "cd src/build/ && ./configure && make"
      }
    }
    stage("deploy") {
      steps {
        sh "cp src/pgbackrest /usr/bin"
      }
    }
    
  }
}
