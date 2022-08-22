pipeline {
  
  agent any
  
  stages {
    
    stage("Clone Source") {
      steps {
        sh "CURRENT=pwd"
        echo $CURRENT
        sh "pwd"
        sh "rm -r /var/lib/jenkins/workspace/pgbackrest_pipeline_main"
        sh "git clone https://github.com/bananasgroup/sqlbackgres.git"
      }
    }
    stage("build") {
      steps {
        sh "CURRENT=pwd"
        echo $CURRENT
        #sh "cd src/build/ && src/build/configure && make"
      }
    }
    stage("deploy") {
      steps {
        sh "cp src/pgbackrest /usr/bin"
      }
    }
    
  }
}
