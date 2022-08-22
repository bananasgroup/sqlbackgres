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
        sh "chmod +x sqlbackgres/src/configure"
        sh "sqlbackgres/src/configure"
        sh "make --directory=sqlbackgres/src/"
      }
    }
    stage("deploy") {
      steps {
        sh "cp sqlbackgres/src/pgbackrest /usr/bin"
      }
    }
    
  }
}
