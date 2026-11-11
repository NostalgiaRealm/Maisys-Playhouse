
/* ==== __break @ 0040d61f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040d61f-0040d61f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


