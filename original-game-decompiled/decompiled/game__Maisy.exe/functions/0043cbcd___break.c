
/* ==== __break @ 0043cbcd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cbcd-0043cbcd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


