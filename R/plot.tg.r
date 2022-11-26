x<- function(y) cos(y)
y<- function(x) sin(x)
plot(y,-pi,pi,ylim=c(-1,1),col="blue")
plot(x,-pi,pi,ylim=c(-1,1),col="red",add=T)
abline(h=0,v=0)

