SpeechToText
============

"Fork" of kronik / ZhiShi's iPhone-Speech-To-Text library to access Google's Speech for Chrome. It localizes the following languages:
* english (default)
* spanish
* catalan
* french
* russian (ZhiShi's project old default)

###Setup
Add the folder "SpeechToText" to your Project.

###Example
```objective-c
//On your header...
#import "SpeechToTextModule.h"
@property (nonatomic, strong) SpeechToTextModule *speech;

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