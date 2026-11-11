
/* ==== __break @ 0043f325 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f325-0043f325
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


