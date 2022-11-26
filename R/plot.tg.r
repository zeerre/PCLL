x<- function(y) cos(y)+sin(y)+log(y)
y<- function(z) sin(z)-cos(z)
plot(y,-pi,pi,ylim=c(-2,2),col="blue")
plot(x,-pi,pi,ylim=c(-2,2),col="red",add=T)
abline(h=0,v=0)

