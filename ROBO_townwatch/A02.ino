//////***********************  กล่องที่ 2  **************************////////////



void box_2()
{
  ////////////// เริ่มเดินจากแยกสุดท้ายก่อนถึงกล่อง ////////////////// แนะนำให้เขียนจาก แยกสุดท้ายที่เข้าไปเก็บกล่อง
       
       BZ(30);servo_kangmark(); Motor(0,0,100);S_down() ; 
      
        fline (8 ,8, 5, 10, 'f',5 ); BZ(30);servo_small(); BZ(30);BZ(30);BZ(30); 


  
  
  /////////////จบที่ คีบกล่อง ที่2  ///////////////

    
     box_val();      ////////////////เก็บค่าสีกล่องไว้ในตัวแปร color_box_val
      
  /////////////////////////////////////////////////////// 

  //////////////////////////////////////////////////////////////////////////////ตัดสินใจในการนำกล่องไปวาง
   //  sw();  
       
   if(color_box_val==color_a)
        {
              /////////////////เดินไปที่พื้นสีที่ 1 เพื่อวางกล่อง แล้วเดินไปกล่องที่ 3 (ข้ามแยกก่อนถึงกล่อง)

              UT_R();
              fline (40 ,40,5, 65, 'c',15 ); BZ(30);
              do{ read_sensor_F(); Motor(20,0); } while(A0>200);
              do{  Motor(20,-20); } while(digitalRead(PA10)==1); delay(80); Motor(-30,-10,4); Motor(0,0,5); BZ(30); servo_kang(); delay(100); S_UP();
             
              do{ read_sensor_F(); Motor(-20,15); } while(A4>80);  Motor(30,10,4); Motor(0,0,5); BZ(30);    
              colorline (20 ,20, 5, 'r','l', 10);  BZ(30);              


              
                                    
        }

        
    else if(color_box_val==color_b)
        {
                            
                    /////////////////เดินไปที่พื้นสีที่ 1 เพื่อวางกล่อง แล้วเดินไปกล่องที่ 3 (ข้ามแยกก่อนถึงกล่อง  แนะนำให้เข้าทางเดียวกัน  ก่อนเข้าไปคีบกล่อง 3) 

              
              bline (30 ,30,5, 25, 'c','r',8 ); BZ(30);
              fline (8 ,8,5, 10, 'c',15 ); BZ(30);
              do{ read_sensor_F(); Motor(20,-20); } while(A0>200);
              do{  Motor(20,0); } while(digitalRead(PA10)==1);delay(80); Motor(-30,-10,4); Motor(0,0,5); BZ(30); servo_kang(); delay(100); S_UP();
             
              do{ read_sensor_F(); Motor(-20,0); } while(A4>80);  Motor(30,10,4); Motor(0,0,5); BZ(30);
              bline (20 ,20,5, 10, 'c','r',8 ); BZ(30);
              fline (20 ,20,5, 10, 'g',1 ); BZ(30);
              colorline (20 ,20, 5, 'r','l', 10);  BZ(30);        

                    
                    
         }
     else 
         {                            
                    /////////////////เดินไปที่พื้นสีที่ สุดท้าย เพื่อวางกล่อง แล้วเดินไปกล่องที่ 3 (ข้ามแยกก่อนถึงกล่อง  แนะนำให้เข้าทางเดียวกัน  ก่อนเข้าไปคีบกล่อง 3) 

              
              fline (10 ,10,5, 10, 'f','r',8 ); BZ(30);
              fline (30 ,30,5, 30, 'c',8 ); BZ(30);
              do{ read_sensor_F(); Motor(20,0); } while(A0>200);
              do{  Motor(20,0); } while(digitalRead(PA10)==1);delay(80); Motor(-30,-10,4); Motor(0,0,5); BZ(30); servo_kang(); delay(100); S_UP();
             
              do{ read_sensor_F(); Motor(-20,0); } while(A4>80);  Motor(30,10,4); Motor(0,0,5); BZ(30);
              bline (30 ,30,5, 35, 'c','r',8 ); BZ(30);
              fline (40 ,40,5, 100, 'c',2 ); BZ(30);
              colorline (20 ,20, 5, 'r','l', 10);  BZ(30);        

                    
                    
          }
    
        
}

 
