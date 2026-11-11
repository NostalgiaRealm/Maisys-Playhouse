
/* ==== __break @ 00448efa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448efa-00448efa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


