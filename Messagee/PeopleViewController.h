//
//  SecondViewController.h
//  Messagee
//
//  Created by Ernesto Vargas on 2/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>
#import <RestKit/RKRequestSerialization.h>
#import "UGUser.h"

@interface PeopleViewController : UIViewController <RKRequestDelegate>{
}

@property (weak, nonatomic) IBOutlet UITextField *usernameTextField;

@end
