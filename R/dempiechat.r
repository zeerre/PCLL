library(plotrix)#Getting the library. 
#Creating data for the graph. 
x<-c(20,65,15,50,45)
labels<-c("India","America","Shri Lanka","Nepal","Bhutan")
#Give the chart file a name.
png(file="3d_pie_chart1.jpg")
# Plot the chart.
pie3D(x,labelslabels=labels,explode=0.1,main="CountryPieChart")
# Save the file. 
dev.off()
