pipeline {
  
  agent any
  
  stages {
    
    stage("Clone Source") {
      steps {
        sh "pwd"
        sh "rm -r /var/lib/jenkins/workspace/pgbackrest_pipeline_main"
        sh "git clone https://github.com/bananasgroup/sqlbackgres.git"
      }
    }
    stage("build") {
      steps {
        sh "CURRENT=pwd"
        sh "echo $CURRENT"
      }
    }
    stage("deploy") {
      steps {
        sh "cp src/pgbackrest /usr/bin"
      }
    }
    
  }
}
