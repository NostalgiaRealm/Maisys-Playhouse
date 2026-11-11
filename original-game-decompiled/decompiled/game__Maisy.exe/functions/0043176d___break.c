
/* ==== __break @ 0043176d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043176d-0043176d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


