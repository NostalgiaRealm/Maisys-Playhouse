
/* ==== __break @ 0042e19d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042e19d-0042e19d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


