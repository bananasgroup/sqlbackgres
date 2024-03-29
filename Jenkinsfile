pipeline {
  
  agent any
  
  triggers {pollSCM '* * * * *'}
  
  stages {
    stage('Source checkout') {
        steps {
            checkout(
                [
                    $class: 'GitSCM',
                    branches: [[name: 'main']],
                    userRemoteConfigs: [
                        [
                            url: 'https://github.com/bananasgroup/sqlbackgres.git'
                        ]
                    ]
                ]
            )
            stash 'source'
        }
    }
    stage("Clone Source") {
      steps {
        sh "rm -r /var/lib/jenkins/workspace/pgbackrest_pipeline_main/*"
        sh "git clone https://github.com/bananasgroup/sqlbackgres.git"
        sh "mv sqlbackgres build"
      }
    } //end stage clone source
    
    stage("build") {
      steps {
        dir("build/src/") {
          sh "chmod +x configure"
          sh "./configure"
          sh "make"
        }
      }
    } //end stage build
    
    stage("deploy") {
      steps {
        sh "cp sqlbackgres/src/pgbackrest /usr/bin"
      }
    } //end stage deploy
    
  } //end stages
  
  post {
    success {
      echo "All done!"
    }
    failure {
      echo "ERROR: Build stop with failure."
    }
    always {
      deleteDir() //cleanup workspace
    }
  } //end post
} //end pipline
