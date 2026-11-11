
/* ==== __break @ 0045d13d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045d13d-0045d13d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


