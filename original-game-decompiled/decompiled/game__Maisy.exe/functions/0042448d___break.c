
/* ==== __break @ 0042448d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042448d-0042448d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


