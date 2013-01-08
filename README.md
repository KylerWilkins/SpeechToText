SpeechToText
============

"Fork" of kronik / ZhiShi's iPhone-Speech-To-Text library to access Google's Speech for Chrome: https://github.com/iz3/ZhiShi/tree/master/src/iPhone-Speech-To-Text 

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
```objective-c
#import "SpeechToTextModule.h"
@property (nonatomic, strong) SpeechToTextModule *speech;
```

### On your .m file:
```objective-c
//Ini class:
self.speech  = [[SpeechToTextModule alloc] initWithLocaleCode:SpeechToTextLocaleSpanish];
        [self.speech setDelegate:self];

//(...)

- (IBAction)push:(id)sender
{
    [self.speech beginRecording];
}

#pragma mark - Voice delegate
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

See Stand Alone Demo for a example of the library