
/* ==== __break @ 00479b8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479b8d-00479b8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


