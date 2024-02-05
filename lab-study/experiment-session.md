# Investigating Vibrotactile Distance Encodings: Experiment Session

## Setup and Explanation

### Helmet Fitting

Please put the helmet on your head and adjust the tightness as necessary, until you are comfortable with the placement.

### Tactors

Three vibration motors (tactors) have been placed inside the helmet, equidistant along the midline of the head, as shown in the [provided diagram](../design/head-regions.pdf). These tactors will now be activated individually so you can feel where they are located. If needed, please feel free to ask the evaluator to activate a tactor again.

### Following Distance

We believe an appropriate way of warning a cyclist of an approaching vehicle, is to convey to them the *following distance* of the vehicle behind. Despite being called the *following distance*, this is actually a measure of the time it would take the vehicle following behind to reach your location, if you were to suddenly stop.

In this lab-study, we quantise this metric into three discrete categories: *far*, *near*, and *imminent*. The encoding schemes which you will be evaluating, each have a unique way of communicating these distances to a cyclist using vibrotactile cues, delivered using the three vibration motors in the helmet - the specifics of which will be explained shortly.

### Questionnaire - Part 1

Before we go on to describe and evaluate the encoding schemes, please follow the link and complete the *Demographic Info and Initial Thoughts* section of the questionnaire: [TactiHelm - Lab Study Questionnaire](https://forms.office.com/e/G1WUgtXXxy).

Once you have completed the questionnaire, please ask the evaluator any questions on anything you are unsure about before we continue with the study.

## Distance Encoding Schemes

The following encoding schemes have been defined for study. These schemes were created by varying the **pattern** (the number of stimuli and the time between stimuli) of a single vibration rhythm, and the **rhythm duration** (the number of times a rhythm is repeated). To make these schemes easier to remember, we have given them nicknames, based on how they operate - the schemes' full name is within the parentheses.

1. **Singular Constant** (Singular Pattern with Monotonic Duration)
2. **Singular Varying** (Singular Pattern with Varying Duration)
3. **Wall Constant** (Sequential Synchronous Pattern with Monotonic Duration)
4. **Wall Varying** (Sequential Synchronous Pattern with Varying Duration)
5. **Wave Constant** (Sequential Asynchronous Pattern with Monotonic Duration)
6. **Wave Varying** (Sequential Asynchronous Pattern with Varying Duration)

### Descriptions

With a **Singular Pattern**, only the tactor at the location relative to the specified distance is activated. Hence the name 'Singular', as only a single tactor is activated at one time.

| Distance | Activated Tactors |
|:--------:|:-----------------:|
|    Far   |        Rear       |
|   Near   |        Mid        |
| Imminent |       Front       |

With a **Wall Pattern**, all tactors up to the tactor at the location relative to the specified distance are activated at the same time. Hence the name 'Wall', as multiple tactors can be activated at the same time - creating a wall across your scalp.

| Distance |   Activated Tactors  |
|:--------:|:--------------------:|
|    Far   |         Rear         |
|   Near   |     Rear **and** Mid     |
| Imminent | Rear, Mid, **and** Front |

With a **Wave Pattern**, all tactors up to the tactor at the location relative to the specified distance are activated one at a time with an interval between them, in sequential order. Hence the name 'Wave', as the tactors are activated like a wave across your scalp.

| Distance |   Activated Tactors  |
|:--------:|:--------------------:|
|    Far   |         Rear         |
|   Near   |    Rear **then** Mid   |
| Imminent | Rear, **then** Mid, **then** Front |

With a **Constant Duration**, each vibrational cue is delivered only once. Hence the name 'Constant', as the number of repetitions remains a constant one.

| Distance | Repetitions |
|:--------:|:-----------:|
|    Far   |      1      |
|   Near   |      1      |
| Imminent |      1      |

With a **Varying Duration**, the number of times a vibrational cue is repeated increases when the distances decreases. Hence the name 'Varying', as the number of repetitions varies depending on the distance.

| Distance | Repetitions |
|:--------:|:-----------:|
|    Far   |      1      |
|   Near   |      2      |
| Imminent |      3      |

|      Pattern Scheme     | Duration Scheme | Distance |      Activated Tactors     | Repetitions |
|:-----------------------:|:---------------:|:--------:|:--------------------------:|:-----------:|
|         Singular        |    Monotonic    |    Far   |            Rear            |      1      |
|         Singular        |    Monotonic    |   Near   |             Mid            |      1      |
|         Singular        |    Monotonic    | Imminent |            Front           |      1      |
|         Singular        |     Varying     |    Far   |            Rear            |      1      |
|         Singular        |     Varying     |   Near   |             Mid            |      2      |
|         Singular        |     Varying     | Imminent |            Front           |      3      |
|  Sequential Synchronous |    Monotonic    |    Far   |            Rear            |      1      |
|  Sequential Synchronous |    Monotonic    |   Near   |        Rear **and** Mid        |      1      |
|  Sequential Synchronous |    Monotonic    | Imminent |    Rear, Mid, **and** Front    |      1      |
|  Sequential Synchronous |     Varying     |    Far   |            Rear            |      1      |
|  Sequential Synchronous |     Varying     |   Near   |        Rear **and** Mid        |      2      |
|  Sequential Synchronous |     Varying     | Imminent |    Rear, Mid, **and** Front    |      3      |
| Sequential Asynchronous |    Monotonic    |    Far   |            Rear            |      1      |
| Sequential Asynchronous |    Monotonic    |   Near   |        Rear **then** Mid       |      1      |
| Sequential Asynchronous |    Monotonic    | Imminent | Rear, **then** Mid, **then** Front |      1      |
| Sequential Asynchronous |     Varying     |    Far   |            Rear            |      1      |
| Sequential Asynchronous |     Varying     |   Near   |        Rear **then** Mid       |      2      |
| Sequential Asynchronous |     Varying     | Imminent | Rear, **then** Mid, **then** Front |      3      |

## Evaluation

You will now evaluate each of the six schemes. The evaluation of each scheme is split into two parts.

Before we begin the evaluation, you will be given a chance to practice.

After you have completed schemes 1 and 2, we will take a short break, where we will ask you to partly complete questions 7 - 16 of the questionnaire. After you have completed schemes 3 and 4, we will take another break for the questionnaire. After you have completed schemes 5 and 6, the evaluation will end and you will be asked to complete the remaining questionnaire.

### What will happen?

For each scheme, you will be be presented with three scenarios.

The first scenario simulates the approach of a vehicle from behind, and is designed to quickly train you on how the encoding scheme works. It lasts approximately 40 seconds, with the helmet vibrating every five seconds.

Once you have completed the short practice scenario for the scheme and are ready to move on, you will be presented with the other two scenarios. These randomly vibrate any one of the three tactors on the helmet using the current encoding scheme and are designed to test how well you can perceive the different vibrational cues. They are slightly longer than the practice one - lasting approximately 60 seconds, with the helmet also vibrating every five seconds.

### What do I do?

During a scenario, each time you feel a vibrational cue, please immediately note down what following distance you believe is being conveyed, using the aforementioned terms, *far*, *near*, or *imminent*. When the scenario is finished you will be given a chance to change any of your answers before you submit them.

Both before and after a scenario, you will be given the chance to ask any questions. Please feel free to ask the evaluator if you require a break between scenarios.