
/* ==== __break @ 00422818 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00422818-00422818
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


