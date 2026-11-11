
/* ==== __break @ 00410103 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410103-00410103
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


