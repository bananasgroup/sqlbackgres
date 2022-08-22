pipeline {
  
  agent any
  
  stages {
    
    stage("Clone Source") {
      steps {
        sh "rm -r /var/lib/jenkins/workspace/pgbackrest_pipeline_main/*"
        sh "git clone https://github.com/bananasgroup/sqlbackgres.git"
      }
    }
    stage("build") {
      steps {
        sh "cd sqlbackgres/src"
        sh "pwd"
        sh "./configure"
        sh "make"
      }
    }
    stage("deploy") {
      steps {
        sh "cp sqlbackgres/src/pgbackrest /usr/bin"
      }
    }
    
  }
}
