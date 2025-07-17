data(mtcars)
mtcars
mean_mpg <- mean(mtcars$mpg)
mean_mpg
pie(mtcars$mpg)
barplot(height=mtcars$mpg)
colnames(mtcars)
mtcars
class(mtcars)
head(mtcars, n=3)
summary(mtcars)
rownames(mtcars)
car <- c("Mazda RX4", "Mazda RX4 Wag", "Datsun 710", "Hornet 4 Drive", "Hornet Sportabout", "Valiant", "Duster 360", "Merc 240D", "Merc 230", "Merc 280", "Merc 280C", "Merc 450SE", "Merc 450SL", "Merc 450SLC", "Cadillac Fleetwood", "Lincoln Continental", "Chrysler Imperial", "Fiat 128", "Honda Civic", "Toyota Corolla", "Toyota Corona", "Dodge Challenger", "AMC Javelin", "Camaro Z28", "Pontiac Firebird", "Fiat X1-9", "Porsche 914-2", "Lotus Europa", "Ford Pantera L", "Ferrari Dino", "Maserati Bora", "Volvo 142E")

origin <- c("Japan", "Japan", "Japan", "United States", "United States", "United States", "United States", "Germany", "Germany", "Germany", "Germany", "Germany", "Germany", "Germany", "United States", "United States", "United States", "Italy", "Japan", "Japan", "Japan", "United States", "United States", "United States", "United States", "Italy", "Germany", "British", "United States", "Italy", "Italy", "Sweden")

cars_origin_df <- data.frame(car, origin)
head(cars_origin_df)

any(is.na(mtcars))
library(ggplot2)
ggplot(data = mtcars) + 
  labs(title = "Mtcars", subtitle = "Blank Canvas") +
  theme(plot.title = element_text(hjust = 0.5, face = "bold")) +
  theme(plot.subtitle = element_text(hjust = 0.5))

ggplot(data = mtcars, aes(x = mpg)) + 
  labs(title = "Mtcars", subtitle = "+ Aesthetic Mapping") +
  theme(plot.title = element_text(hjust = 0.5, face = "bold")) +
  theme(plot.subtitle = element_text(hjust = 0.5)) 
ggplot(data = mtcars, aes(x = mpg, y = after_stat(count))) + 
  geom_histogram() +
  labs(title = "Mtcars", subtitle = "+ Geom Layer") +
  theme(plot.title = element_text(hjust = 0.5, face = "bold")) +
  theme(plot.subtitle = element_text(hjust = 0.5)) 


ggplot(data = mtcars, aes(x = cyl, y = after_stat(count))) + 
  geom_histogram(bins = 32, color = 'black', fill = '#ffe6b7')

ggplot(data=mtcars, mapping = aes(x = wt, y = after_stat(count))) +
  geom_histogram(bins=32)+
  labs(title='MTcars wt')

ggplot(data=mtcars, mapping=aes(x = mpg, y = after_stat(count)))+
  geom_bar(width=0.5)
commodities <- c("Food", "Rent", "Clothes", "Education", "Miscellaneous", "Savings")
expenditure_A <- c(10, 25, 4, 13, 2, 17)
expenditure_B <- c(8, 36, 7, 16, 4, 33)

# Create bar plot
barplot(rbind(expenditure_A, expenditure_B), beside = FALSE,
        names.arg = commodities, col = c("blue", "red"),
        main = "Expenditure Comparison between Family A and B",
        xlab = "Commodities", ylab = "Expenditure ('000 Rs.)")
legend("topright", c("Family A", "Family B"), fill = c("blue", "red"))


barplot(table(mtcars$cyl),
        xlab = 'CYL',
        ylab = 'Count',
        col = 'skyblue')
library(ggplot2)
ggplot(mtcars, aes(x = factor(cyl))) +
  geom_bar(fill = "steelblue") +
  labs(title = "Number of Cars by Cylinders",
       x = "Cylinders",
       y = "Count") +
  theme_minimal()


commodity <- c("food", "rent", "clothes", "education", "misc", "savings")
family_a <- c(10,25,4,13,2,17)
family_b <- c(8, 36, 7 ,16, 4, 33)

pie(family_a,
    labels=commodity,
    main='Expenditure of family A')

boxplot(family_a)

df <- data.frame()


# Simple hypothesis testing Z-test
sample_mean <- 985
pop_mean <- 1000
pop_sd <- 50
n <- 100
alpha <- 0.05

z_stat <-((sample_mean - pop_mean))/(pop_sd/sqrt(n))
z_stat

p_value <- pnorm(z_stat)
p_value

if(p_value < alpha){
  cat("Reject H0")} else{
    cat("Accept H0")
  }

# one sample t-test
n <- 15
alpha <- 0.05
sample_mean <- 8.2
pop_mean <- 10
sample_std <- 3.4
weight_loss <- c(7.5, 9.2, 4.3, 11.0, 8.7, 6.8, 9.4, 12.1, 5.6, 8.3, 7.5, 10.2, 6.4, 9.8, 5.5)
t_stat <- t.test(weight_loss, mu = pop_mean, alternative='two.sided')
t_stat


p_value <- 2 * pt(abs(t_stat), df, lower.tail = FALSE)
p_value

# two-sample z-test
n1 <- 40
mean_1 <- 8.2
pop_std_1 <- 2.1
n2 <- 45
mean_2 <- 9.5
pop_std_2 <- 2.4
alpha <- 0.01

z_stat <-((mean_1 - mean_2))/sqrt((pop_std_1^2/n1) + (pop_std_2^2/n2))
z_stat

p_value <- pnorm(z_stat)
p_value

# independent two sample t-test
n1 <- 25
avg1 <- 78
std1 <- 8
n2 <- 28
avg2 <- 73
std2 <- 9
alpha <- 0.05

library(BSDA)
t_stat <- tsum.test(avg1, std1, n1, avg2, std2, n2, alternative = "two.sided", var.equal=TRUE, conf.level = 0.95)
t_stat
