
/* ==== __break @ 004787ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004787ae-004787ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


