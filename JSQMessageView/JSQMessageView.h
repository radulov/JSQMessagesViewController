//
//  JSQMessageView.h
//  JSQMessageView
//
//  Created by Viktor Radulov on 7/2/17.
//  Copyright © 2017 Hexed Bits. All rights reserved.
//

#import <JSQMessageView/JSQMessagesViewController.h>

//  Views
#import <JSQMessageView/JSQMessagesCollectionView.h>
#import <JSQMessageView/JSQMessagesCollectionViewCellIncoming.h>
#import <JSQMessageView/JSQMessagesCollectionViewCellOutgoing.h>
#import <JSQMessageView/JSQMessagesTypingIndicatorFooterView.h>
#import <JSQMessageView/JSQMessagesLoadEarlierHeaderView.h>

//  Layout
#import <JSQMessageView/JSQMessagesBubbleSizeCalculating.h>
#import <JSQMessageView/JSQMessagesBubblesSizeCalculator.h>
#import <JSQMessageView/JSQMessagesCollectionViewFlowLayout.h>
#import <JSQMessageView/JSQMessagesCollectionViewLayoutAttributes.h>
#import <JSQMessageView/JSQMessagesCollectionViewFlowLayoutInvalidationContext.h>
#import <JSQMessageView/JSQAudioMediaViewAttributes.h>

//  Toolbar
#import <JSQMessageView/JSQMessagesComposerTextView.h>
#import <JSQMessageView/JSQMessagesInputToolbar.h>
#import <JSQMessageView/JSQMessagesToolbarContentView.h>

//  Model
#import <JSQMessageView/JSQMessage.h>

#import <JSQMessageView/JSQMediaItem.h>
#import <JSQMessageView/JSQAudioMediaItem.h>
#import <JSQMessageView/JSQPhotoMediaItem.h>
#import <JSQMessageView/JSQLocationMediaItem.h>
#import <JSQMessageView/JSQVideoMediaItem.h>

#import <JSQMessageView/JSQMessagesBubbleImage.h>
#import <JSQMessageView/JSQMessagesAvatarImage.h>

#import <JSQMessageView/JSQAudioMediaViewAttributes.h>

//  Protocols
#import <JSQMessageView/JSQMessageData.h>
#import <JSQMessageView/JSQMessageMediaData.h>
#import <JSQMessageView/JSQMessageAvatarImageDataSource.h>
#import <JSQMessageView/JSQMessageBubbleImageDataSource.h>
#import <JSQMessageView/JSQMessagesCollectionViewDataSource.h>
#import <JSQMessageView/JSQMessagesCollectionViewDelegateFlowLayout.h>
#import <JSQMessageView/JSQMessagesViewAccessoryButtonDelegate.h>

//  Factories
#import <JSQMessageView/JSQMessagesAvatarImageFactory.h>
#import <JSQMessageView/JSQMessagesBubbleImageFactory.h>
#import <JSQMessageView/JSQMessagesMediaViewBubbleImageMasker.h>
#import <JSQMessageView/JSQMessagesTimestampFormatter.h>
#import <JSQMessageView/JSQMessagesToolbarButtonFactory.h>

//  Categories
#import <JSQMessageView/NSString+JSQMessages.h>
#import <JSQMessageView/UIColor+JSQMessages.h>
#import <JSQMessageView/UIImage+JSQMessages.h>
#import <JSQMessageView/UIView+JSQMessages.h>
#import <JSQMessageView/NSBundle+JSQMessages.h>
