package cn.xiaoman.library.android.snappy.sample;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

import cn.xiaoman.library.android.snappy.Snappy;

import com.xiaoman.library.android.snappy.sample.R;

import java.io.IOException;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = findViewById(R.id.textView);

        try {
            byte[] bytes = Snappy.compress("kjsdkjfj");

            textView.setText(Snappy.compress("kjsdkjfj").toString());

            textView.setText(new String(Snappy.uncompress(bytes)));
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
