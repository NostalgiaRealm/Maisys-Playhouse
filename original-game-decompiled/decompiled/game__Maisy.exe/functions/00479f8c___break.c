
/* ==== __break @ 00479f8c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479f8c-00479f8c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


