
/* ==== __break @ 00479a23 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479a23-00479a23
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


