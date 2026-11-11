
/* ==== __break @ 0042facf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042facf-0042facf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


