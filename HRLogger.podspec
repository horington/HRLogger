#
# Be sure to run `pod lib lint HRLogger.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'HRLogger'
  s.version          = '0.1.0'
  s.summary          = 'log of Objective-C'
  s.description      = 'log of OBjective-C'

  s.homepage         = 'https://github.com/horington/HRLogger'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'eodnd_1991_@naver.com' => 'eodnd_1991_@naver.com' }
  s.source           = { :git => 'https://github.com/horington/HRLogger.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.source_files = 'HRLogger/Classes/**/*'

end
