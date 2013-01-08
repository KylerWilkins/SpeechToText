SpeechToText
============

"Fork" of kronik / ZhiShi's iPhone-Speech-To-Text library to access Google's Speech for Chrome that adds more languages and a non-GUI version.

https://github.com/kronik/ZhiShi/tree/master/src/iPhone-Speech-To-Text 

##Suported languages
* english (default): SpeechToTextLocaleEnglish
* spanish: SpeechToTextLocaleSpanish
* catalan: SpeechToTextLocaleCatalan
* french: SpeechToTextLocaleFrench
* russian (ZhiShi's project old default): SpeechToTextLocaleRussian

##Setup
* Add the folder "SpeechToText" to your Project.
* Import SpeechToTextModule.h on your code

Add the following Frameworks:
* AVFoundation.framework
* AudioToolbox.framework

##Example

### On your .h file:
Add UIGestureRecognizerDelegate to your @interface
```objective-c
#import "SpeechToTextModule.h"
@property (nonatomic, strong) SpeechToTextModule *speech;
```

### On your .m file:
Initialize SpeechToTextModule:
```objective-c
self.speech  = [[SpeechToTextModule alloc] initWithLocale:SpeechToTextLocaleSpanish];
[self.speech setDelegate:self];
```

For the non-GUI version you must use:
```objective-c
self.speech = [[SpeechToTextModule alloc] initWithNoGUIAndLocale:SpeechToTextLocaleSpanish];
[self.speech setDelegate:self];
```

To start recording:
```objective-c
[self.speech beginRecording];
```

To end recording:
```objective-c
[self.speech stopRecording:YES];
```

Delegates
```objective-c
- (void)didRecognizeResponse:(NSString *)recognizedText
{
    NSLog(@"%@", recognizedText);
}
- (void)speechStartRecording
{
    NSLog(@"REC...");
}
- (void)speechStopRecording
{
    NSLog(@"STOP");
}
```

See the demos for a live example of the library

##ToDo
###Force Language
Add property to force to a non supported language (without GUI)
###Wave form delegate
A delegate with a wave's UIImage