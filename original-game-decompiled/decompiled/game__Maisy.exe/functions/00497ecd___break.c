
/* ==== __break @ 00497ecd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497ecd-00497ecd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


