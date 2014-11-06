DiceTableViewCell
=================

A Parallax TableViewCell like the Dice app

Contained within the sample project is a table view which creates 10 cells. Build the app
and scroll the table view you will notice the background image of each cell responding to
the direction of the table views scroll motion.

The cell holds a background image which is inherently bigger than the cell height.

As the table view scrolls it post notifications of the direction of the scroll.

The cell responds to the notifications by adjusting the centre of the background image.

This is a very simple implementation with hard-coded #defines that dictate the speed of the
parallax effect and hard-coded sizes of the cell and background images. All the images used
in the demo are album art images.
