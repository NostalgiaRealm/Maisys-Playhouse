
/* ==== __break @ 00479f8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479f8e-00479f8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


