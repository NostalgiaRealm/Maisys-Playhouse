
/* ==== __break @ 004178ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178ce-004178ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


