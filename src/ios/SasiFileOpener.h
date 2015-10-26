
#import <Cordova/CDV.h>

@interface SasiFileOpener : CDVPlugin <UIDocumentInteractionControllerDelegate> {
    NSString *localFile;
}

@property(nonatomic, strong) UIDocumentInteractionController *controller;

- (void) openFile: (CDVInvokedUrlCommand*)command;

@end
