
/* ==== __break @ 00409475 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00409475-00409475
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


