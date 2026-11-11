
/* ==== __break @ 00479bc4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bc4-00479bc4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


