clc;
clear;

load('timewater.mat');
load('gel(1).mat');
tic;
data=double(PARF);
toc;
for i=1:40
tic;
timedata=aictime(data,time);toc;
figure(1);plot(timedata(:,2));

end