#
# Be sure to run `pod lib lint SXOpenSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SXOpenSDK'
  s.version          = '1.0.1'
  s.summary          = 'A short description of SXOpenSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/souxinzn/SXOpenSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liutu' => 'liutu@souxinzn.com' }
  s.source           = { :git => 'https://github.com/souxinzn/SXOpenSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

s.ios.deployment_target = '9.0'

s.resources = 'SXOpenSDK/Frameworks/SXIotSDK.framework/Versions/A/Resources/*.bundle'
s.public_header_files =
'SXOpenSDK/Frameworks/SXIotSDK.framework/Versions/A/Headers/*.h',
'SXOpenSDK/Frameworks/SXUDPSDK.framework/Versions/A/Headers/*.h'

s.libraries = 'c++'
s.frameworks = 'SystemConfiguration','NetworkExtension'
s.vendored_libraries = 'SXOpenSDK/Frameworks/libhomelib.a'
s.vendored_frameworks = 'SXOpenSDK/Frameworks/*.framework'

s.dependency 'WebViewJavascriptBridge', '~> 6.0'
s.dependency 'YYModel', '~> 1.0'
s.dependency 'CocoaAsyncSocket', '~> 7.6.1'
s.dependency 'Logan', '~>1.0'
s.dependency 'YYModel', '~> 1.0'
s.dependency 'FMDB', '~> 2.7.5'
end
