
/* ==== __break @ 00497ecf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497ecf-00497ecf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


