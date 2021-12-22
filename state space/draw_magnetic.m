% draw 2 dof robot
clc;
close all;


% plot([0;3],[0;0] ,':yo','linewidth' ,2)
% 


for i = 1:5:length(out.h)
    plot([0; 1], [-1; -1],'-bo',[0; 1], [-1.5; -1.5],'-bo', [0; 0], [-1; -1.5],'-bo', [1; 1], [-1; -1.5],'-bo',...
        [0.5;0.51],[out.h(i);out.h(i)+0.01], '-bo', 'linewidth', 3);
    
    xlim([- 2]);
    ylim([-3 5]);
    grid on;
    pause(0.2);
1end