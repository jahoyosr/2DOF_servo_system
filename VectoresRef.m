theta=0:0.05:2*pi;
L=180;
t=0:1:125;
r=30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2));
phi=(asin((30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2)).*cos(theta).*tan(theta))/L))*180/pi;
d=30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2)).*cos(theta)+180-180.*cos(asin((30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2)).*cos(theta).*tan(theta))/180))+120;
ezpolar('30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2))')
ezplot('(asin((30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2)).*cos(theta).*tan(theta))/180))*180/pi')
ezplot('30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2)).*cos(theta)+180-180.*cos(asin((30.*((5+cos(2.*theta+pi/2).^2)-(1+sin(2.*theta+pi/2).^2)).*cos(theta).*tan(theta))/180))+120')
% polar(theta,r,'--r')
% [X,Y] = pol2cart(theta,r);
% plot(X,Y)