
Pod::Spec.new do |s|  
    s.name              = 'DyteSdk' # Name for your pod
    s.version           = '0.0.1'
    s.summary           = 'Beta release of dyte sdk'
    s.homepage          = 'https://dyte.in'
    s.license          = 'Apache 2'

    s.author           = { 'dyte' => 'dev@dyte.in' }

    s.platforms    = { :ios => "11.0" }
    # s.source       = { :http => "file:/Users/rohitbhatia/Desktop/dyte-mobile-client/sdk-out/", :type => "zip"}
    # change the source location
    s.source       = { :git => "https://github.com/blendtale/sdk-test-repo.git", :tag => "#{s.version}" }
    # change the source location

    s.vendored_frameworks = 'Frameworks/DyteSdk.xcframework', 'Frameworks/WebRTC.xcframework'
    s.resources      = "Fonts/*.ttf"
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end 
