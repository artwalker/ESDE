[TOC]
# What is AI?
Artificial intelligence is when a machine or a computer can exhibit some signs of human-like intelligence. 
# The main takeaway
 With the right data and the right model, artificial intelligence can solve many problems. But choosing the right problem, finding the right data, and training the right model can be difficult. 
# Deep learning
Deep learning is either a subset or a subset of a subset of machine learning.
![Deep Learning](https://img2023.cnblogs.com/blog/1994352/202309/1994352-20230927115015365-204062712.png)
# The type of AI
AI can be general or narrow.  
## General AI
It's when a machine can learn any task that a human can perform.  
This does not exist.  
## Narrow AI
Typical “narrow” tasks include vision, language processing, and planning.  
All of the AI that exists today and most of the AI that you hear people talking about isnarrow.  
And narrow AI is when a computer exhibits intelligence at one task.  
To be clear, you can do pretty impressive things with narrow AI.  
**Such as:**
A self-driving car for example, has one narrow AI system that does vision. It looks at the road and interprets things.  
There's another AI system that does steering, that controls the car.  There's another AI system that does route planning--that says, on a broad level, where are we going, how do weget there?  
And when you stitch all of those together, you can actually create a very impressive system.  
But you cannot sit this car down and play chess with it. This car will not learn how to paint. This car will not learn how to speak Russian. It's doing a specific set of tasks, each of which has been trained separately.  
And that is narrow AI. So from now on, when I say AI, I'm talking about narrow artificial intelligence.
# How to build AI
There are many ways to build AI, two classical ways to implement artificial intelligence including expert systems and tree search.  
## Expert systems
In an expert system, it's just a person writing a list of rules. If this,then that. If this, then that.  
![expert systems](https://img2023.cnblogs.com/blog/1994352/202309/1994352-20230927115059763-1261658346.png)
But a lot of the things that we actually think of as really straightforward turn out to be quite difficult.So for example, we can identify a table like that-- very, very easily. We know what the table is.  
But I challenge you towrite a list of rules that can define a table. What color is it? What's it made of? How many legs does it have?What shape is it?  
So it turns out that even something like "what is a table" becomes really, really challenging to answer using an expert system.
## Tree search
Another kind of algorithm people might use in classical AI, it's called a tree search.  
You start in your current state. That's state A. And you enumerate all of the possible options from there. And then you just repeat that for each state until you find the state where you want to end up in-- your goal state.  
Now, obvious problem here-- a lot of options.  
A lot of options when you're operating in the real world. So how do you actually enumerate all of them? And sometimes, it can even be difficult to define a goal state.  
When I'm playing chess, I know there's a goal state of win-- checkmate. But in real-life environments, it's not so simple.  
So again, can be really, really helpful. And this is how the chess computers beat Garry Kasparov. But also limited.  
# The tasks of Machine learning
Machine learning is a subset of artificial intelligence that allows a machine to learn automatically from data.  
Machine learning can perform many tasks, i.e. classification, clustering, and regression.  
## Classification
 Classification means, here's some input data. I'm going to give you an output of a class. So maybe it's an image, and I tell you what kind of animal it is. Maybe it's a list of information about somebody and I tell you whether they're a threat or not. You give me an input, I give you a class.  
## Clustering
Clustering is, again, you give me some kind of input, and I'm going to find clusters. I'm going to find things that are similar.  
Maybe I'm clustering different groups of animals or other similar groups of animals together.  
Maybe it's a similar gene sequences. Oh, these look related somehow.  
So clustering can be really useful, especially in genetics.  
## Regression
Regression is, you get input data. But instead of putting a class, like "dog" or "safe," you put a numerical prediction.  
So maybe you're predicting home price based on square footage. Maybe you're predicting crime rate based on location.  
# Types of learning
There are three types of learning: supervised, unsupervised, and reinforcement learning.  
All of these types of learnings have pros and cons.  
### Supervised
When we talk about supervised learning, it's really like studying for a test. I'm going to give you the questions and the answers in advance. You're going to study. Then you're going to figure out what the broad patterns are. And then I'm going to test you. This is often-- doesn't have to be, but it's often applied to classification problems.  
Now, the key thing here is that, in supervised learning, you need to have the answers in advance. You need to have labeled data, in other words. I need to-- it's not enough for me to just show the model a bunch of images.The images have to be labeled as cat, cow, giraffe, dog, whatever. Threat, not threat. There have to be answers.  
Otherwise, it'd be like giving you flash cards with only one side. And you're turning it over, and you're like, I have no idea. So that's what supervised learning is.  
With supervised learning, the trade-off is, you need just, like, a stupid amount of labeled data. And then that takes forever. That can be very, very expensive to collect and label data.  
> trade-off:权衡或取舍  
### Unsupervised
You don't have those answers. You don't have those labels. It's more like a baby playing.  
You're just discovering patterns. This is often used in clustering. I don't know, a priori, what the right clusters are going to look like.  
I have no idea what they should look like. All I know is, oh, these looks something-- they look somewhat similar. These look somewhat similar, and they look kind of different from each other. But I have no external source of information as far as what kind of class this belongs to.  
With unsupervised learning, you don't necessarily know what the right answer is. So it can help you discoverpatterns, but it may not be as powerful as supervised learning.  
### Reinforcement learning
Reinforcement learning is,again, you don't really have a right answer, and you're not really playing either. It's something separate. You are aiming to reward some kind of behavior or some kind of solution to a problem. It's like a rat in a maze. You give it cheese, and it discovers winning strategies on its own.  
So you don't have the right answer. You just know that you need the thing to get out of the maze. This is often used in robotics, for example, with training a robotic arm, or maybe training an agent in a game.  
And with reinforcement learning, the real trick is,how good is your simulation? Because you're not going to take a real car and do reinforcement learning with a real car. It's going to take you a million iterations. You're going to have to go through a million cars before itlearns how to drive without crashing.  
> trick：巧妙的方法或策略  
When you simulate it, then the question is, how good is your simulation? Will it actually apply to the real world?Are you capturing all of the noise, all of the disturbances, all of the possibilities? Are you capturing that biker who cuts you off, or the wind, or the reflection of the sun on a white sign?  
> disturbances：干扰  
> "biker who cuts you off" 意思是骑摩托车的人突然插入你的车道，通常指在交通中突然超车或变道，可能导致危险情况。这个短语用于描述交通中的不礼貌或危险的行为。  
> "the reflection of the sun on a white sign" 意思是太阳在白色标志上的反光。  
> "Reiterate" 意思是重申或再次强调某事物，通常是为了让别人明白或记住。这个词强调对已经表达过的观点、信息或建议的重复，以确保清楚地传达意思或强调重要性。  
> Presentation:口头演讲、幻灯片展示、报告、展览或任何以视觉、听觉或其他方式展示信息的方式。  
> "Potentially" 是一个副词，用来表示某事有可能发生或存在，但并不一定会发生。它强调了潜在性或可能性。例如，如果你说某件事情是 "potentially 危险的"，意思是它可能会带来危险，但不一定会发生。这个词经常用于描述未来可能的情况或某事物的潜在性质。  
# The seven steps of training an algorithm
1. Define a problem.
- Problem identification is super important
- There are a lot of problems that cannot be solved by AI, period!
- It's important to be discerning with where you even apply AI
- What's the problem that we're trying to solve?
- Define the problem
2. Find data.
- What kind of data do I need in order to solve this problem?
3. Clean data.
- > extraneous 无关的
- 80% of data science and 80% of AI
- Cleaning data is the biggest pain, but it's most of the work
- Data doesn't just exist in this nice way where you can show it to a machine learning model
- Cleaning data is a huge part of what it means to be a data scientist and to do machine learning or to do AI
- Getting good, clean data is a huge boon for any kind of AI development
4. Choose a model.
5. Train the model.
- Features are what allow the model to make a decision.
- What a neural network does-- a convolutional neural network-- takes an image, says 256 by 256 pixels. Passes it through the first layer of the neural network. Starts extracting features. With that first layer,maybe it's looking at lines, or edges, or color gradients. Passes it through to the next layer in the neural network, and it combines those lines into shapes. Maybe now, it's looking for circles, or triangles, or whatever. Next part of the neural network. It gets passed through again. So it's processing it, processing it, making it more-- like, making the features-- automatically extracting features at each step, and making the features more and more sophisticated. So now, it's looking at noses, and eyes, and now finally, at the very end, it's looking at a whole face or a whole body.
- So that's what a convolutional neural network does. But it starts, with the model's perspective, as 256 by 256 features. And what a neural network is sometimes really, really good at is extracting the features that are relevant, combining them, and processing them until they're more and more sophisticated. And now, you have facial recognition, for example. There's, like, some kind of eye/nose/mouth structure that it's looking for. Oh, this is your face. I know who this is. So that's what a convolutional neural network does.
- Models are dumb.They're not looking at this from the perspective of, I know what a nose or a cat or a dog is. They're looking at it from the perspective of, I see an array of data. And sometimes, a neural network, a model, can interpret it and create these features that are more sophisticated. I'll also say, these models can be very brittle.
6. Test the model.
- It's really, really critical, when we test the model, we use data that the model has not seen before. 
- Make sure that your training data is representative.
- Be very intentional about the way that you are collecting training data to make sure that it reflects the use case. This goes back to problem definition.What problem are we trying to solve? Who is our end user? What are we hoping to accomplish?
7. Deploy the model.
- You can do this on Amazon Web Services. 
- You can make it publicly accessible. 
- You can put it on a secure hard drive somewhere
- However you guys are going to use it, that will dictate how to deploy it. 
- So everything flows from problem definition. 
- You can put it on a chip.

# Four questions and A word of caution
## Four questions
1. Goal?
   - What is the goal? 
   - Problem definition, right? 
   - What is the goal? 
   - What problem are you solving? 
   - What are its inputs and its outputs? 
   - What does the thing do? 
2. Training data?
   - What is the training data? 
   - Where did it come from? 
   - How was it prepared? 
   - How did you make sure--did you check for this bias or that bias? 
   - How did you make sure that it's balanced? 
3. Model?
   - What kind of model did you use? 
   - Why? 
   - Is it interpretable? 
   - Should it be? 
   - How did you pick this model?
4. Accuracy?
   -  What's the accuracy when you test it on new data, when you test it on testing data-- not training data. 
   -  When you give it a whole new set of data that it's never seen, what is its accuracy?
   -  The reinforcement learning version of this would be, what happens when you test it in a different simulation or in the real world? 
   - But something--there has to be some question about, how well does this actually do when it's given a problem that it has not had the opportunity to memorize?
So goal, training data, model, accuracy. If you keep these four questions in mind, you'll be better able to assess any AI system you encounter.
## A word of caution
Values->Mission->Objectives->Strategy->Task  
![a_word_of_caution](https://img2023.cnblogs.com/blog/1994352/202309/1994352-20230927115138694-653640354.png)
Developing an AI model can be very difficult, can also be very valuable, and it can also be very seductive.  
It is a task.  
If the task does not belong to a strategy in support of certain objectives that measure a mission that reflect values, it is not a good use of time, even if it is really cool.  
So when I say goal, I'm talking, again, both at a low level-- inputs and outputs of this model-- but also at a high level.  
What are we trying to do? And it's important that we constantly reevaluate the low-level goals with respect to the high-level problem.  
We want to situate the model, and the training, and the data within a broader problem- solving context.  
If I were looking at the Air Force and trying to figure out, where would AI-- or where to implement AI, I would start here.  
I would start with identifying, what are the values? What's the mission, objectives, strategy, tasks? Kind of as a tree.  
And I would identify problems.  
What are the gaps between our aspirations and our reality? Then I would think critically about which gaps artificial intelligence actually could fill and whether those gaps would be partially or completely filled.  
If you have data that's unused, that presents an opportunity.  
If you have tasks that require a lot of people, that presents an opportunity.  
If you have tasks that are complex or require a lot of thinking and processing data, those are problems where AI can help.  
If you have a problem with drug overdoses or with suicides, AI is probably not going to help.  
And in fact, I've heard of cases where people collect data, and they do all of this quantitative analysis, but this is fundamentally a human problem.  
And so it can be actually quite distracting.  
So my point is simply that, at its best, AI can make the Air Force more efficient, more effective.  
At its worst, it can distract us from actually solving difficult, challenging human and cultural problems.  
So it's really important to be discerning about what kind of problem you're trying to solve and where AI can help.  
But at this point, I hope, and I think that you have the tools to prevent that from happening, and to harness this very powerful new technology in support of building a more effective Air Force and pursuing America's interests.

# 内容来源

- [res-6-013-ai-101-fall-2021](https://ocw.mit.edu/courses/res-6-013-ai-101-fall-2021/)
