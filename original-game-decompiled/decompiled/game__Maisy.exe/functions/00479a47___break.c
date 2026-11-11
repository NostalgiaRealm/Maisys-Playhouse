
/* ==== __break @ 00479a47 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a47-00479a47
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


